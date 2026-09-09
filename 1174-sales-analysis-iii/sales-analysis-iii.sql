SELECT c.product_id, c.product_name
FROM Product c
JOIN Sales o
  ON c.product_id = o.product_id
group by c.product_id,c.product_name
having min(o.sale_date) >= '2019-01-01' AND max(o.sale_date) <'2019-03-31';

